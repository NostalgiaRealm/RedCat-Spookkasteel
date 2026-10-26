/*
 * FUN_0051d1dc at 0051d1dc
 * undefined __register FUN_0051d1dc(int param_1, int param_2)
 * Address ranges: 0051d1dc-0051d3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051d1dc(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_18 = &LAB_0051d3d4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = FUN_00516c48(param_2,"Alignment");
  if (cVar1 != '\0') {
    uVar3 = FUN_00516b18(local_c,"Alignment");
    FUN_0051c8a0(local_8,(char)uVar3);
  }
  cVar1 = FUN_00516c48(local_c,"CanMove");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"CanMove");
    *(bool *)(local_8 + 5) = bVar2;
  }
  cVar1 = FUN_00516c48(local_c,"CanSize");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"CanSize");
    *(bool *)(local_8 + 6) = bVar2;
  }
  cVar1 = FUN_00516c48(local_c,"CanSort");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"CanSort");
    FUN_0051c8d8(local_8,bVar2);
  }
  cVar1 = FUN_00516c48(local_c,"Fixed");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"Fixed");
    FUN_0051c90c(local_8,bVar2);
  }
  cVar1 = FUN_00516c48(local_c,"Margin");
  if (cVar1 != '\0') {
    iVar4 = FUN_00516b18(local_c,"Margin");
    FUN_0051cad4(local_8,iVar4);
  }
  cVar1 = FUN_00516c48(local_c,"SortIndex");
  if (cVar1 != '\0') {
    iVar4 = FUN_00516b18(local_c,"SortIndex");
    FUN_0051cb6c(local_8,iVar4);
  }
  cVar1 = FUN_00516c48(local_c,"SortOrder");
  if (cVar1 != '\0') {
    uVar3 = FUN_00516b18(local_c,"SortOrder");
    FUN_0051cc08(local_8,(char)uVar3);
  }
  cVar1 = FUN_00516c48(local_c,"Title");
  if (cVar1 != '\0') {
    FUN_00516a8c(local_c,"Title",(int *)&local_10);
    FUN_0051ccb8(local_8,local_10);
  }
  cVar1 = FUN_00516c48(local_c,"Visible");
  if (cVar1 != '\0') {
    bVar2 = FUN_00516b54(local_c,"Visible");
    FUN_0051ced4(local_8,bVar2);
  }
  cVar1 = FUN_00516c48(local_c,"Width");
  if (cVar1 != '\0') {
    uVar3 = FUN_00516b18(local_c,"Width");
    *(undefined4 *)(local_8 + 0x34) = uVar3;
    if (*(int *)(local_8 + 0x34) < 0xf) {
      *(undefined4 *)(local_8 + 0x34) = 0xf;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0051d3db;
  puStack_18 = (undefined1 *)0x51d3d3;
  FUN_00403db0((int *)&local_10);
  return;
}

