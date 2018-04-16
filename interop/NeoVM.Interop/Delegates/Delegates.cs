﻿using NeoVM.Interop.Enums;
using NeoVM.Interop.Interfaces;
using NeoVM.Interop.Types;
using NeoVM.Interop.Types.Collections;

namespace NeoVM.Interop.Delegates
{
    /// <summary>
    /// Delegate for receive operations
    /// </summary>
    /// <param name="context">Execution context</param>
    public delegate void delOnStepInto(ExecutionContext context);
    /// <summary>
    /// Delegate for receive ExecutionContextStack changes
    /// </summary>
    /// <param name="stack">Stack</param>
    /// <param name="item">ExecutionContext</param>
    /// <param name="index">Index</param>
    /// <param name="operation">Operation</param>
    public delegate void delOnExecutionContextStackChange(ExecutionContextStack stack, ExecutionContext item, int index, ELogStackOperation operation);
    /// <summary>
    /// Delegate for receive StackItemStack changes
    /// </summary>
    /// <param name="stack">Stack</param>
    /// <param name="item">StackItem</param>
    /// <param name="index">Index</param>
    /// <param name="operation">Operation</param>
    public delegate void delOnStackItemsStackChange(StackItemStack stack, IStackItem item, int index, ELogStackOperation operation);
}