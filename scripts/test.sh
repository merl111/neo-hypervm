#!/bin/bash

SCRIPT=$(readlink -f "$0")
SCRIPTPATH=$(dirname "$SCRIPT")

cd $SCRIPTPATH/../tests/

# TODO: Change local path

export NEO_VM_PATH=$SCRIPTPATH/../src/bin/NeoVM.so

echo "************************"
echo "**      UNIT TEST     **"
echo "************************"

dotnet test NeoSharp.VM.Interop.Tests
