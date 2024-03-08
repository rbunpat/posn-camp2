# Define the runcpp function
function runcpp {
    param (
        [string]$cppFileName
    )

    # Ensure the file exists
    if (-not (Test-Path $cppFileName)) {
        Write-Host "File '$cppFileName' not found."
        return
    }

    # Set the output directory
    $outputDirectory = "output"

    # Create the output directory if it doesn't exist
    if (-not (Test-Path $outputDirectory)) {
        New-Item -ItemType Directory -Path $outputDirectory | Out-Null
    }

    # Compile the C++ code and output the executable to the specified directory
    $exeFileName = Join-Path -Path $outputDirectory -ChildPath ($cppFileName -replace '\.cpp$', '.exe')
    $compilerArgs = @("-o", $exeFileName, $cppFileName)
    & g++ @compilerArgs

    # Check if compilation was successful
    if ($LASTEXITCODE -eq 0) {
        Write-Host "Compilation successful. Executable created: $exeFileName"
        
        # Run the compiled executable
        & $exeFileName
    } else {
        Write-Host "Compilation failed."
    }
}

# Call the function with the provided arguments
runcpp $args[0]

