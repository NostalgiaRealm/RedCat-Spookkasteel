/*
 * FUN_005c2640 at 005c2640
 * undefined FUN_005c2640(void)
 * Address ranges: 005c2640-005c273c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c2640(int param_1,int param_2,int param_3)

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
      uVar3 = FUN_005c2740(param_1,param_2,param_3);
      return uVar3;
    }
    iVar1 = FUN_005c0530(param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_005c3350(0);
      if (iVar1 != 0) {
        iVar1 = FUN_005c3350(0);
        if (iVar1 != 0) {
          iVar1 = FUN_005c0d90();
          iVar2 = FUN_005c0d90();
          if ((iVar1 != 0) && (iVar2 != 0)) {
            local_6c = FUN_005c28a0(local_24,iVar1,local_48,iVar2);
          }
        }
      }
      FUN_005c0b70(local_68,(param_3 - param_2) + 1);
      return local_6c;
    }
  }
  return 0;
}

