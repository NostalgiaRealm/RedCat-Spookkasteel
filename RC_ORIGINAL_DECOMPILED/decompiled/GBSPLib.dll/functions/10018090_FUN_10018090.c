/*
 * FUN_10018090 at 10018090
 * undefined FUN_10018090(void)
 * Address ranges: 10018090-1001818c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10018090(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_6c;
  undefined1 local_68 [32];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  local_6c = 0;
  if ((((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x6c) < 1)) &&
      (*(int *)(param_1 + 0x74) == 0)) && (param_2 < param_3)) {
    if (*(int *)(param_1 + 0xac) == 0) {
      uVar3 = FUN_10018190(param_1,param_2,param_3);
      return uVar3;
    }
    iVar1 = FUN_10016430(param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_10018c60(0);
      if (iVar1 != 0) {
        iVar1 = FUN_10018c60(0);
        if (iVar1 != 0) {
          iVar1 = FUN_10016ac0();
          iVar2 = FUN_10016ac0();
          if ((iVar1 != 0) && (iVar2 != 0)) {
            local_6c = FUN_100182f0(local_24,iVar1,local_48,iVar2);
          }
        }
      }
      FUN_10016860(local_68,(param_3 - param_2) + 1);
      return local_6c;
    }
  }
  return 0;
}

