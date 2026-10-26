/*
 * FUN_0053fee8 at 0053fee8
 * undefined __register FUN_0053fee8(int param_1, undefined4 param_2, int param_3, undefined4 param_4, LONG * param_5)
 * Address ranges: 0053fee8-0053ffe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 47 for TAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53e020 slot 47 for
   TAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_0053fee8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,LONG *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte local_34 [28];
  undefined4 local_18;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_14 = (undefined *)0x0;
  puStack_40 = &LAB_0053ffe4;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_18 = param_2;
  local_c = param_3;
  local_8 = param_1;
  iVar1 = FUN_0048ec24(*(int *)(param_1 + 0x3bc));
  if (iVar1 != 0) {
    uVar2 = FUN_0053eb9c(local_8);
    if ((char)uVar2 != '\0') {
      local_10 = FUN_00412ca4(local_c);
      if (-1 < local_10) {
        iVar1 = FUN_0048ec24(*(int *)(local_8 + 0x3bc));
        uVar3 = iVar1 - 1;
        if (SBORROW4(iVar1,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        if (local_10 <= (int)uVar3) {
          FUN_0048f02c(*(int **)(local_8 + 0x3bc),local_10,(undefined4 *)local_34);
          iVar1 = FUN_00492440(*(int **)(local_8 + 0x210),local_34);
          FUN_00403e48((int *)&local_14,*(int *)(iVar1 + 0x24));
          uVar3 = param_5[1] + 1;
          if (SCARRY4(param_5[1],1)) {
            uVar3 = thunk_FUN_00402874(uVar3);
          }
          iVar1 = *param_5 + 2;
          puVar4 = local_14;
          if (SCARRY4(*param_5,2)) {
            thunk_FUN_00402874((uint)local_14);
            iVar1 = extraout_ECX;
          }
          FUN_0041ccc0(*(int **)(*(int *)(local_8 + 0x200) + 0x1fc),param_5,iVar1,puVar4,uVar3);
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0053ffeb;
  puStack_40 = (undefined1 *)0x53ffe3;
  FUN_00403db0((int *)&local_14);
  return;
}

