/*
 * Ctl3dRegister at 5f001600
 * undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
 * Address ranges: 5f001600-5f001644
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dRegister(undefined4 param_1)

{
  int iVar1;
  
                    /* 0x1600  12  Ctl3dRegister */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  DAT_5f005244 = DAT_5f005244 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f005244 == 1) {
    FUN_5f002180();
  }
  iVar1 = Ctl3dIsAutoSubclass();
  if (iVar1 != 0) {
    Ctl3dAutoSubclass(param_1);
  }
  return DAT_5f005240;
}

