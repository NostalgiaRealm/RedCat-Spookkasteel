/*
 * FUN_005516dc at 005516dc
 * undefined __register FUN_005516dc(int param_1, int * param_2)
 * Address ranges: 005516dc-005517a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005516dc(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = (undefined4 *)0x0;
  local_14 = 0;
  puStack_28 = &LAB_005517a3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = 0;
  local_c = param_2;
  local_8 = param_1;
  do {
    iVar1 = FUN_00551a30(local_8,local_10);
    uVar2 = *(undefined4 *)(iVar1 + 4);
    FUN_00409bd8(local_10,&local_14);
    (**(code **)(*local_c + 0xc))(local_c,"HIGHSCORES",local_14,uVar2);
    iVar1 = FUN_00551a30(local_8,local_10);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    FUN_00409bd8(local_10,(int *)&local_1c);
    FUN_0040407c(&local_18,(undefined4 *)&DAT_005517cc,local_1c);
    (**(code **)(*local_c + 4))(local_c,"HIGHSCORES",local_18,uVar2);
    local_10 = local_10 + 1;
  } while (local_10 != 0xb);
  uVar2 = 1;
  (**(code **)(*local_c + 0xc))(local_c,"GENERAL","HAUNTED");
  *in_FS_OFFSET = uVar2;
  puStack_28 = &LAB_005517aa;
  uStack_2c = 0x5517a2;
  FUN_00403dd4((int *)&local_1c,3);
  return;
}

