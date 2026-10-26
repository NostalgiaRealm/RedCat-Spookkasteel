/*
 * FUN_0050e688 at 0050e688
 * undefined __register FUN_0050e688(int * param_1)
 * Address ranges: 0050e688-0050e784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e688(int *param_1)

{
  char cVar1;
  int *in_FS_OFFSET;
  undefined1 auStackY_100 [172];
  undefined4 uStackY_54;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  byte bVar7;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined *local_28;
  tagRECT local_24;
  int local_14;
  undefined4 local_10;
  byte local_9;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_28 = (undefined *)0x0;
  puStack_30 = &LAB_0050e785;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  local_8 = param_1;
  FUN_0050e30c(param_1,&local_24);
  FUN_0041c034(*(int **)(local_8[0x81] + 0x10),0x80000008);
  (**(code **)(**(int **)(local_8[0x81] + 0xc) + 8))(*(int **)(local_8[0x81] + 0xc),local_8[0x16]);
  local_9 = 0;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    local_9 = 2;
  }
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    local_14 = *(int *)(local_8[0x80] + 0x20);
    local_10 = *(undefined4 *)(local_8[0x80] + 0x1c);
  }
  else {
    local_14 = *(int *)(local_8[0x80] + 0xc);
    local_10 = *(undefined4 *)(local_8[0x80] + 0x10);
  }
  cVar6 = '\0';
  cVar1 = '\x01';
  piVar5 = &local_14;
  piVar4 = (int *)0x0;
  iVar3 = 0;
  puVar2 = auStackY_100;
  uStackY_54 = 0x50e75b;
  bVar7 = local_9;
  FUN_00432714((int)local_8,(int *)&local_28);
  uStackY_54 = 0x50e76f;
  FUN_004abf90((int *)local_8[0x81],&local_24.left,local_28,(byte)puVar2,iVar3,piVar4,piVar5,cVar1,
               cVar6,bVar7);
  *in_FS_OFFSET = (int)puVar2;
  FUN_00403db0((int *)&local_28);
  return;
}

