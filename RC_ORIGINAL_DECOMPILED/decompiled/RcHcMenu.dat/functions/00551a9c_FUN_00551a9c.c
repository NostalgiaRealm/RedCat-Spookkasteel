/*
 * FUN_00551a9c at 00551a9c
 * undefined __register FUN_00551a9c(int param_1, int param_2, int * param_3)
 * Address ranges: 00551a9c-00551bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00551a9c(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  
  *param_3 = -1;
  puStack_24 = (undefined1 *)0x551ac5;
  piVar1 = (int *)FUN_00403064((int *)&DAT_00550dd8,'\x01',param_3);
  puStack_28 = &LAB_00551bc8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = FUN_00551a30(param_1,9);
  if (*(int *)(iVar2 + 4) <= *(int *)(param_2 + 4)) {
    piVar3 = (int *)FUN_00551a54(param_1,9,param_2);
    local_1c = 8;
    do {
      iVar2 = local_1c + 1;
      if (SCARRY4(local_1c,1)) {
        thunk_FUN_00402874((uint)piVar3);
        iVar2 = extraout_EDX;
      }
      iVar2 = FUN_00551a30(param_1,iVar2);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)FUN_00551a30(param_1,local_1c);
      if (piVar3[1] <= iVar2) {
        iVar2 = FUN_00551a30(param_1,local_1c);
        FUN_00403e04(piVar1 + 2,*(undefined4 **)(iVar2 + 8));
        iVar2 = FUN_00551a30(param_1,local_1c);
        uVar4 = *(uint *)(iVar2 + 4);
        piVar1[1] = uVar4;
        iVar2 = local_1c + 1;
        if (SCARRY4(local_1c,1)) {
          thunk_FUN_00402874(uVar4);
          iVar2 = extraout_EDX_00;
        }
        iVar2 = FUN_00551a30(param_1,iVar2);
        uVar4 = FUN_00551a54(param_1,local_1c,iVar2);
        iVar2 = local_1c + 1;
        if (SCARRY4(local_1c,1)) {
          thunk_FUN_00402874(uVar4);
          iVar2 = extraout_EDX_01;
        }
        FUN_00551a54(param_1,iVar2,(int)piVar1);
        *param_3 = local_1c;
        piVar3 = param_3;
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00551bcf;
  puStack_28 = (undefined1 *)0x551bc7;
  FUN_00403094(piVar1);
  return;
}

