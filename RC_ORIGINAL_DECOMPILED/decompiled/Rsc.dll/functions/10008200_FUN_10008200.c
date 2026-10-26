/*
 * FUN_10008200 at 10008200
 * undefined4 __cdecl FUN_10008200(int param_1)
 * Address ranges: 10008200-1000824c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10008200(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_10031a8c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10031a8c == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_100098d0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_10031a8c);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

