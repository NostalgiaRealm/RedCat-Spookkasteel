/*
 * FUN_004d74b4 at 004d74b4
 * undefined __register FUN_004d74b4(undefined4 param_1, int param_2)
 * Address ranges: 004d74b4-004d7645
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d73a8 slot 5 for TAgentBlnDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d73a8 slot 5 for
   TAgentBlnDesc. Original bytes unchanged; names and types still inferred. */

void FUN_004d74b4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *local_38;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *local_1c;
  undefined1 *local_18;
  int *local_14;
  int iStack_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = (int *)&stack0xfffffffc;
  iStack_10 = 6;
  do {
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  local_18 = &LAB_004d766e;
  local_1c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00406a48(&PTR_DAT_004d7474,(int *)&local_1c);
  puVar4 = local_1c;
  FUN_00406a48(&PTR_DAT_004d747c,(int *)&stack0xffffffe0);
  pcVar7 = "AgentBln";
  iVar6 = 0;
  iVar1 = CONCAT31((int3)((uint)local_c >> 8),1);
  local_38 = (undefined1 *)0x4d751d;
  iVar8 = local_c;
  local_18 = (undefined1 *)
             FUN_004907a8((int *)&PTR_FUN_004d73a8,'\x01',(int)&PTR_FUN_004d7420,1,0,
                          (undefined4 *)"AgentBln",local_c,puVar4,puVar4);
  local_38 = (undefined1 *)0x4d752c;
  local_14 = (int *)FUN_00493178((int *)&PTR_FUN_004d7420,'\x01');
  puStack_3c = &LAB_004d7646;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar5 = &DAT_004d769c;
  local_38 = &stack0xfffffffc;
  FUN_00406a48(&PTR_DAT_004d7484,(int *)&stack0xffffffdc);
  FUN_00406a48(&PTR_DAT_004d748c,(int *)&stack0xffffffd8);
  FUN_0048c090((int)&PTR_FUN_0048b6c0,local_14,local_14 + 7,0x7fffffff,0x80000000,
               (undefined4 *)PTR_DAT_00572140,0x82f,iVar8,puVar4,puVar5);
  pcVar3 = "AgentContextMode";
  FUN_00406a48(&PTR_DAT_004d7494,(int *)&stack0xffffffd4);
  FUN_00406a48(&PTR_DAT_004d749c,(int *)&stack0xffffffd0);
  FUN_0048c090((int)&PTR_FUN_0048b6c0,local_14,local_14 + 8,0x7fffffff,0x80000000,
               (undefined4 *)PTR_DAT_00572140,0x20,iVar6,pcVar7,pcVar3);
  pcVar7 = "DialogKind";
  FUN_00406a48(&PTR_DAT_004d74a4,(int *)&stack0xffffffcc);
  FUN_00406a48(&PTR_DAT_004d74ac,(int *)&local_38);
  uVar2 = 0x7fffffff;
  FUN_0048c090((int)&PTR_FUN_0048b6c0,local_14,local_14 + 9,0x7fffffff,0x80000000,
               (undefined4 *)PTR_DAT_00572140,0x20,local_38,iVar1,pcVar7);
  *in_FS_OFFSET = uVar2;
  FUN_00403094(local_14);
  return;
}

