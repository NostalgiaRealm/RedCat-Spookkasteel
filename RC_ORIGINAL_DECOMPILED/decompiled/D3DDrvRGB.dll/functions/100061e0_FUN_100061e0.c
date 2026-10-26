/*
 * FUN_100061e0 at 100061e0
 * undefined4 __fastcall FUN_100061e0(int * param_1)
 * Address ranges: 100061e0-100062b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100061e0(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0xc] != 0) && (*param_1 != 1)) && (param_1[3] != 0)) &&
     (iVar1 = FUN_10007840(), iVar1 != 0)) {
    FUN_10001b50((uint)((*(byte *)(param_1 + 2) & 4) == 0));
    FUN_10001b10((uint)((*(byte *)(param_1 + 2) & 8) == 0));
    FUN_10001a70(0,(uint)((*(byte *)(param_1 + 2) & 0x10) == 0));
    FUN_100019f0(5,6);
    FUN_10001a40(1);
    iVar1 = FUN_10008430(0,param_1[3],0);
    if (iVar1 != 0) {
      (**(code **)(*DAT_1001bcd0 + 0x68))
                (DAT_1001bcd0,4,0x1c4,param_1[10],param_1[0xc],param_1[7],param_1[9],0x18);
      FUN_10001b10(1);
      FUN_10001b50(1);
      FUN_100060d0((int)param_1);
      return 1;
    }
  }
  return 0;
}

