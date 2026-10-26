/*
 * FUN_0060a105 at 0060a105
 * undefined FUN_0060a105(void)
 * Address ranges: 0060a105-0060a153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060a105(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x60a12d,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

