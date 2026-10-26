/*
 * FUN_100097a0 at 100097a0
 * undefined __thiscall FUN_100097a0(void * this, LPVOID param_1)
 * Address ranges: 100097a0-10009807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100097a0(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      HeapFree(DAT_10031a8c,0,param_1);
    }
    else {
      FUN_100099f0(puVar1,(int)param_1);
      FUN_10007490(9);
    }
  }
  return;
}

