/*
 * FUN_0053c080 at 0053c080
 * undefined __register FUN_0053c080(int * param_1, int * param_2)
 * Address ranges: 0053c080-0053c2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053c080(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  int local_128;
  int local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_12c = (undefined4 *)0x0;
  local_130 = (undefined4 *)0x0;
  local_124 = 0;
  local_128 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_138 = &LAB_0053c2e4;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x22] == 0) {
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  if (local_c == (int *)0x0) {
    FUN_00402fe0(*local_8,local_120);
    FUN_00403fd4(&local_20,local_120);
    pcStack_148 = " Parameter cannot be nil";
    FUN_004040f0(&local_1c,3);
    FUN_00403d94(local_1c);
  }
  local_10 = FUN_00403224(local_c,(int)&DAT_0053b648);
  if (*(int *)(local_10 + 0x18) == local_8[0x25]) {
    iVar3 = FUN_00403224(local_c,(int)&DAT_0053b648);
    local_14 = *(int *)(iVar3 + 0xc);
    if (local_14 == 0) {
      FUN_00402fe0(*local_8,local_120);
      FUN_00403fd4(&local_128,local_120);
      FUN_004040f0(&local_124,3);
      FUN_00403d94(local_124);
    }
    FUN_004d6284((int *)local_8[0x22],local_14);
    local_8[0x24] = *(int *)(local_10 + 0x14);
    *(undefined1 *)(local_8 + 0x21) = 0;
    FUN_0054a2b0(local_8);
  }
  else {
    iVar3 = FUN_00549b64((int)local_8);
    iVar3 = FUN_004cecf8(*(int **)(local_8[0xd] + 4),*(int *)(iVar3 + 0x34));
    local_15 = iVar3 == local_8[5];
    FUN_0053ce30(local_8,*(int **)(local_10 + 0x10),local_15);
    piVar4 = (int *)FUN_0053d8a4((int)local_8);
    bVar2 = FUN_0049441c(*(int **)(local_10 + 0x10),piVar4,*(int **)(local_8[0xf] + 0x18));
    if (!bVar2) {
      pcVar8 = ".DoGotoBookmark: ";
      pcVar7 = " Bookmark not valid (anymore)";
      FUN_00406a48((undefined4 *)PTR_PTR_00572588,(int *)&local_12c);
      puVar6 = local_12c;
      FUN_00402fe0(*local_8,local_120);
      FUN_00403fd4((int *)&local_130,local_120);
      uVar5 = FUN_0045b554((int *)&PTR_FUN_00547088,'\x01',local_130,puVar6,(undefined4 *)pcVar7,
                           (undefined4 *)pcVar8);
      FUN_0040382c(uVar5);
    }
    FUN_0053ddd8(local_10);
  }
  *in_FS_OFFSET = pcStack_148;
  FUN_00403dd4((int *)&local_130,4);
  FUN_00403dd4(&local_20,2);
  return;
}

