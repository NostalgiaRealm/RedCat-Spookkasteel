/*
 * Ctl3dColorChange at 5f001de0
 * undefined4 __stdcall Ctl3dColorChange(void)
 * Address ranges: 5f001de0-5f001e06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dColorChange(void)

{
  undefined4 uVar1;
  
                    /* 0x1de0  6  Ctl3dColorChange */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  uVar1 = FUN_5f002560(0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return uVar1;
}

