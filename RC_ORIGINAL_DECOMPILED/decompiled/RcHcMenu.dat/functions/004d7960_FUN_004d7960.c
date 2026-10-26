/*
 * FUN_004d7960 at 004d7960
 * undefined __register FUN_004d7960(undefined4 param_1, int param_2)
 * Address ranges: 004d7960-004d7b8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d7960(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_1c;
  undefined1 *local_18;
  int *local_14;
  int iStack_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = (int *)&stack0xfffffffc;
  iStack_10 = 8;
  do {
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  local_18 = &LAB_004d7bb6;
  local_1c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406a48(&PTR_DAT_004d78d4,(int *)&local_1c);
  puVar5 = local_1c;
  FUN_00406a48(&PTR_DAT_004d78dc,(int *)&stack0xffffffe0);
  pcVar8 = "AgentBlnItem";
  puVar7 = (undefined4 *)0x0;
  iVar1 = CONCAT31((int3)((uint)local_c >> 8),1);
  local_38 = (undefined1 *)0x4d79c9;
  iVar2 = local_c;
  local_18 = (undefined1 *)
             FUN_004907a8((int *)&PTR_FUN_004d7800,'\x01',(int)&PTR_FUN_004d787c,1,0,
                          (undefined4 *)"AgentBlnItem",local_c,puVar5,puVar5);
  local_38 = (undefined1 *)0x4d79d8;
  local_14 = (int *)FUN_00493178((int *)&PTR_FUN_004d787c,'\x01');
  local_3c = &LAB_004d7b8e;
  local_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_40;
  puVar6 = &DAT_004d7be8;
  local_38 = &stack0xfffffffc;
  FUN_00406a48(&PTR_DAT_004d78e4,(int *)&stack0xffffffdc);
  FUN_00406a48(&PTR_DAT_004d78ec,(int *)&stack0xffffffd8);
  FUN_0048c090((int)&PTR_FUN_0048b6c0,local_14,local_14 + 7,0x7fffffff,0x80000000,
               (undefined4 *)PTR_DAT_00572140,0x82f,iVar2,puVar5,puVar6);
  pcVar4 = "FKAgentBlnID";
  FUN_00406a48(&PTR_DAT_004d78f4,(int *)&stack0xffffffd4);
  FUN_00406a48(&PTR_DAT_004d78fc,(int *)&stack0xffffffd0);
  FUN_0048caa0((int)&LAB_0048c40c,local_14,local_14 + 8,0,(int)&PTR_FUN_004d7420,
               (undefined4 *)"FKAgent",(undefined4 *)PTR_DAT_00572068,0,puVar7,(undefined4 *)pcVar8,
               (undefined4 *)pcVar4);
  pcVar8 = "DisplayText";
  FUN_00406a48(&PTR_DAT_004d7904,(int *)&stack0xffffffcc);
  FUN_00406a48(&PTR_DAT_004d790c,(int *)&local_38);
  FUN_0048a458((int)&PTR_FUN_004897ec,local_14,local_14 + 9,0x96,(undefined4 *)PTR_DAT_00572140,0x20
               ,local_38,iVar1,pcVar8);
  pcVar8 = "BlnItemKind";
  FUN_00406a48(&PTR_DAT_004d7914,(int *)&local_3c);
  puVar3 = local_3c;
  FUN_00406a48(&PTR_DAT_004d791c,&local_40);
  FUN_0048c090((int)&PTR_FUN_0048b6c0,local_14,local_14 + 10,0x7fffffff,0x80000000,
               (undefined4 *)PTR_DAT_00572068,0,local_40,puVar3,pcVar8);
  pcVar8 = "ActionText";
  FUN_00406a48(&PTR_DAT_004d7924,(int *)&stack0xffffffbc);
  FUN_00406a48(&PTR_DAT_004d792c,(int *)&stack0xffffffb8);
  iVar2 = 0x32;
  FUN_0048a458((int)&PTR_FUN_004897ec,local_14,local_14 + 0xb,0x32,(undefined4 *)PTR_DAT_00572068,0,
               puVar5,puVar6,pcVar8);
  *in_FS_OFFSET = iVar2;
  FUN_00403094(local_14);
  return;
}

