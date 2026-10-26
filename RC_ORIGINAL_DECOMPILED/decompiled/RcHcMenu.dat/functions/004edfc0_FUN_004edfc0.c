/*
 * FUN_004edfc0 at 004edfc0
 * undefined __register FUN_004edfc0(int * param_1, int param_2)
 * Address ranges: 004edfc0-004ee17b;004ee183-004ee20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004edfc0(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_fffffeb4;
  char *pcVar5;
  char *pcVar6;
  char *pcStack_140;
  char *pcStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_128;
  int local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_124 = 0;
  local_128 = 0;
  local_11c = (undefined4 *)0x0;
  local_120 = (undefined4 *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_130 = &LAB_004ee210;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  *(undefined1 *)(param_1 + 2) = 0;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_2 + 0x10) == param_1[0xb]) {
    if (*(char *)(param_2 + 8) == '\0') {
      puStack_138 = (undefined1 *)0x4ee02c;
      puStack_12c = &stack0xfffffffc;
      FUN_004ee468(param_1);
      puStack_138 = (undefined1 *)0x4ee034;
      piVar2 = (int *)FUN_004ed794((int)local_8);
      puStack_138 = (undefined1 *)0x4ee03f;
      FUN_004d6284(piVar2,*(int *)(local_c + 0xc));
    }
    else if (*(char *)(param_2 + 8) == '\x01') {
      puStack_138 = (undefined1 *)0x4ee049;
      puStack_12c = &stack0xfffffffc;
      FUN_004ee454((int)param_1);
      puStack_138 = (undefined1 *)0x4ee051;
      piVar2 = (int *)FUN_004ed810((int)local_8);
      puStack_138 = (undefined1 *)0x4ee05c;
      FUN_004d6284(piVar2,*(int *)(local_c + 0xc));
    }
    else {
      puStack_138 = (undefined1 *)0x4ee06e;
      puStack_12c = &stack0xfffffffc;
      FUN_00402fe0(*param_1,local_118);
      puStack_138 = (undefined1 *)0x4ee07c;
      FUN_00403fd4(&local_18,local_118);
      puStack_138 = (undefined1 *)local_18;
      pcStack_13c = ".GotoBookmark: ";
      pcStack_140 = " Internal inconsistency";
      FUN_004040f0(&local_14,3);
      FUN_00403d94(local_14);
    }
    local_8[0xc] = *(int *)(local_c + 0x18);
    iVar4 = FUN_004ed88c(local_8);
    if (iVar4 == 0) {
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4(&local_128,local_118);
      FUN_004040f0(&local_124,3);
      FUN_00403d94(local_124);
    }
    *in_FS_OFFSET = pcStack_140;
    puStack_138 = &LAB_004ee217;
    pcStack_13c = (char *)0x4ee202;
    FUN_00403dd4(&local_128,4);
    pcStack_13c = (char *)0x4ee20f;
    FUN_00403dd4(&local_18,2);
    return;
  }
  puStack_138 = (undefined1 *)0x4ee0c7;
  FUN_004ee2a4((uint)param_1,*(int *)(param_2 + 0x14));
  puStack_138 = (undefined1 *)0x4ee0d2;
  local_10 = (int *)FUN_0049206c((int *)local_8[4]);
  pcStack_13c = &LAB_004ee17c;
  pcStack_140 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_140;
  puStack_138 = &stack0xfffffffc;
  piVar2 = (int *)FUN_004ed88c(local_8);
  FUN_004d6cb4(piVar2,local_10);
  cVar1 = FUN_00494528(local_10,*(int **)(local_c + 0x14));
  if (cVar1 == '\0') {
    pcVar6 = ".GotoBookmark: ";
    pcVar5 = " Bookmark not valid (anymore)";
    FUN_00406a48((undefined4 *)PTR_PTR_00572588,(int *)&local_11c);
    in_stack_fffffeb4 = local_11c;
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4((int *)&local_120,local_118);
    uVar3 = FUN_0045b554((int *)&PTR_FUN_00547088,'\x01',local_120,in_stack_fffffeb4,
                         (undefined4 *)pcVar5,(undefined4 *)pcVar6);
    FUN_0040382c(uVar3);
  }
  FUN_004ef03c(local_c);
  *in_FS_OFFSET = in_stack_fffffeb4;
  FUN_00403094(local_10);
  return;
}

