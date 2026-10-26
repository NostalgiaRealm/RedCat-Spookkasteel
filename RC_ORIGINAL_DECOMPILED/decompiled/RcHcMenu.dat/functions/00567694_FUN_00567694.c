/*
 * FUN_00567694 at 00567694
 * undefined __register FUN_00567694(int param_1, int * param_2)
 * Address ranges: 00567694-0056783c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00567694(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte **ppbVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (byte *)0x0;
  local_10 = 0;
  puStack_20 = &LAB_0056783d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2,"General","GameType");
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER","MaxHealth",10);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x18) = uVar3;
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER",&DAT_0056789c,3);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x14) = uVar3;
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER","Skill",0);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x28) = uVar3;
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER","MirrorPart",0);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x20) = uVar3;
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER","MagicPotion",0);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x1c) = uVar3;
    uVar3 = (**(code **)(*local_c + 8))(local_c,"PLAYER","TotalScore",0);
    *(undefined4 *)(*(int *)(local_8 + 0xc) + 0x24) = uVar3;
    uVar2 = (**(code **)(*local_c + 0x10))(local_c,"SubLevel1_5","Completed",0);
    *(undefined1 *)(*(int *)(local_8 + 0xc) + 0x2c) = uVar2;
    if (*(char *)(*(int *)(local_8 + 0xc) + 0x2c) == '\0') {
      (**(code **)*local_c)(local_c,"Level1","CurrentSubLevel",&local_10,0);
      iVar4 = FUN_00404030(local_10);
      if (iVar4 < 1) {
        *(undefined4 *)(*(int *)(local_8 + 0xc) + 0xc) = 0;
      }
      else {
        ppbVar5 = &local_14;
        iVar7 = 10;
        iVar4 = local_10;
        if (*(uint *)(local_10 + -4) < 0xb) {
          ppbVar5 = (byte **)thunk_FUN_00402874((uint)ppbVar5);
          iVar4 = extraout_ECX;
          iVar7 = extraout_EDX;
        }
        FUN_00403f58((int *)ppbVar5,
                     CONCAT31((int3)((uint)(iVar7 + 1) >> 8),*(undefined1 *)(iVar4 + -1 + iVar7 + 1)
                             ));
        iVar4 = FUN_00409c44(local_14);
        uVar6 = iVar4 - 1;
        if (SBORROW4(iVar4,1)) {
          uVar6 = thunk_FUN_00402874(uVar6);
        }
        *(uint *)(*(int *)(local_8 + 0xc) + 0xc) = uVar6;
      }
    }
    else {
      *(undefined4 *)(*(int *)(local_8 + 0xc) + 0xc) = 0;
    }
  }
  *in_FS_OFFSET = 0;
  puStack_20 = &LAB_00567844;
  uStack_24 = 0x56783c;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

