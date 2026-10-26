/*
 * FUN_0054c810 at 0054c810
 * undefined __register FUN_0054c810(int * param_1, int * param_2)
 * Address ranges: 0054c810-0054c9bd;0054c9c5-0054ca3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054c810(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  char *pcVar5;
  undefined4 *in_stack_fffffea8;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  int local_128;
  byte local_124 [256];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_130 = (undefined4 *)0x0;
  local_12c = (undefined4 *)0x0;
  local_128 = 0;
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_138 = &LAB_0054ca3f;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_004d7f34);
  if ((char)uVar2 != '\0') {
    local_10 = (int *)FUN_00493178((int *)&PTR_FUN_004d787c,'\x01');
    *in_FS_OFFSET = &stack0xfffffeb8;
    iVar3 = FUN_00403224(local_c,(int)&PTR_FUN_004d7f34);
    FUN_0048bcbc((int *)local_10[7],*(undefined4 *)(iVar3 + 0xc));
    local_18 = local_10[7];
    cVar1 = FUN_004d302c((int *)local_8[0xc9],&local_18,0,local_10);
    if (cVar1 == '\0') {
      pcVar7 = ".ExecuteBalloonLink";
      FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_1c);
      puVar6 = local_1c;
      FUN_00406a48(&PTR_DAT_0054c240,(int *)&local_20);
      in_stack_fffffea8 = local_20;
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4((int *)&local_24,local_124);
      uVar2 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_24,in_stack_fffffea8,puVar6,
                           (undefined4 *)pcVar7);
      FUN_0040382c(uVar2);
    }
    (**(code **)(*(int *)local_10[0xb] + 0x6c))((int *)local_10[0xb],&local_128);
    FUN_00409974(local_128,&local_14);
    uVar2 = FUN_004d7d54((int)local_10);
    cVar1 = (char)uVar2;
    if (cVar1 == '\x01') {
      FUN_0054bec0((undefined4 *)local_8[0xcd],local_14);
    }
    else if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
      pcVar5 = ".ExecuteBalloonLink";
      pcVar4 = " Unhandled case-part";
      pcVar7 = " Unhandled case-part";
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4((int *)&local_12c,local_124);
      uVar2 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_12c,(undefined4 *)pcVar7,
                           (undefined4 *)pcVar4,(undefined4 *)pcVar5);
      FUN_0040382c(uVar2);
    }
    *in_FS_OFFSET = in_stack_fffffea8;
    FUN_00403094(local_10);
    return;
  }
  pcVar5 = ".ExecuteBalloonLink";
  pcVar4 = " Unhandled case-part";
  pcVar7 = " Unhandled case-part";
  FUN_00402fe0(*local_8,local_124);
  FUN_00403fd4((int *)&local_130,local_124);
  uVar2 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_130,(undefined4 *)pcVar7,
                       (undefined4 *)pcVar4,(undefined4 *)pcVar5);
  FUN_0040382c(uVar2);
  *in_FS_OFFSET = pcVar7;
  FUN_00403dd4((int *)&local_130,3);
  FUN_00403dd4((int *)&local_24,3);
  FUN_00403db0(&local_14);
  return;
}

