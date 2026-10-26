/*
 * FUN_0054c330 at 0054c330
 * undefined __register FUN_0054c330(uint param_1, int param_2)
 * Address ranges: 0054c330-0054c44d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054c330(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint extraout_EDX_02;
  uint uVar6;
  undefined4 extraout_EDX_03;
  undefined4 uVar7;
  undefined4 extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_0054c44e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  local_8 = param_1;
  uVar3 = FUN_00409dd0(*(undefined **)(param_1 + 0x334));
  uVar5 = extraout_ECX;
  uVar7 = extraout_EDX;
  if ((char)uVar3 == '\0') {
    local_18 = *(undefined4 *)(local_8 + 0x334);
    local_14 = 0xb;
    FUN_0040a894((byte *)"Agent Helpfile %s not found!",&local_18,0,&local_10);
    FUN_00403d94(local_10);
    uVar5 = extraout_ECX_00;
    uVar7 = extraout_EDX_00;
  }
  if (*(char *)(local_8 + 0x2e8) != '\0') {
    FUN_0044dc60(*(int **)(local_8 + 0x318),uVar7,uVar5);
    uVar5 = extraout_ECX_01;
    uVar7 = extraout_EDX_01;
    if (*(int *)(*(int *)(local_8 + 0x2d4) + 0x24) != local_c) {
      piVar1 = (int *)(local_8 + 0x314);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(local_8);
      }
      uVar4 = *(uint *)(*(int *)(local_8 + 0x2d4) + 0x24);
      uVar6 = *(uint *)(local_8 + 0x314);
      if (9 < uVar6) {
        uVar4 = thunk_FUN_00402874(uVar4);
        uVar6 = extraout_EDX_02;
      }
      *(uint *)(local_8 + 0x2ec + uVar6 * 4) = uVar4;
      (**(code **)(**(int **)(local_8 + 0x2d4) + 0x60))(*(int **)(local_8 + 0x2d4),local_c);
      uVar5 = extraout_ECX_02;
      uVar7 = extraout_EDX_03;
    }
    FUN_0043262c(*(int **)(local_8 + 0x2d4),CONCAT31((int3)((uint)uVar7 >> 8),1),uVar5);
    FUN_0054c4d8(local_8,extraout_EDX_04,extraout_ECX_03);
    FUN_00455648(*(int *)(local_8 + 0x2d0),'\x01');
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054c455;
  puStack_20 = (undefined1 *)0x54c44d;
  FUN_00403db0(&local_10);
  return;
}

