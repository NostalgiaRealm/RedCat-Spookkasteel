/*
 * FUN_10008eca at 10008eca
 * undefined __stdcall FUN_10008eca(PVOID param_1, PEXCEPTION_RECORD param_2)
 * Address ranges: 10008eca-10008f18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008eca(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10008ef2,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

