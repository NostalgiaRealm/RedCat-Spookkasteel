/*
 * FUN_0053e378 at 0053e378
 * undefined __register FUN_0053e378(int * param_1, int param_2, LONG * param_3, undefined2 param_4)
 * Address ranges: 0053e378-0053e415;0053e432-0053e44c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e378(int *param_1,int param_2,LONG *param_3,undefined2 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_EDX;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  LONG local_24 [4];
  int local_14;
  undefined1 local_d;
  int local_c;
  int *local_8;
  
  pLVar3 = local_24;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pLVar3 = *param_3;
    param_3 = param_3 + 1;
    pLVar3 = pLVar3 + 1;
  }
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0053e30c((int)param_1);
  if ((char)uVar1 != '\0') {
    local_14 = (**(code **)(*(int *)local_8[0xf6] + 4))();
    local_d = local_c != local_14;
    if ((bool)local_d) {
      FUN_0054b510(local_8[0xf6]);
      puStackY_34 = &LAB_0053e416;
      uStackY_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_38;
      iVar2 = local_c - local_14;
      if (SBORROW4(local_c,local_14)) {
        thunk_FUN_00402874(0);
        iVar2 = extraout_EDX;
      }
      FUN_0054823c((int *)local_8[0xf6],iVar2);
      *in_FS_OFFSET = uStackY_38;
      puStackY_34 = (undefined1 *)0x53e415;
      FUN_0054b528((int *)local_8[0xf6]);
      return;
    }
    puStackY_34 = (undefined1 *)0x53e445;
    FUN_004f8464(local_8,local_c,local_24,param_4);
  }
  return;
}

