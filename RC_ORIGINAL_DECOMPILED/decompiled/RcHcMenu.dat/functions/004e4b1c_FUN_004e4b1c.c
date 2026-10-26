/*
 * FUN_004e4b1c at 004e4b1c
 * undefined __register FUN_004e4b1c(int * param_1)
 * Address ranges: 004e4b1c-004e4d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 16 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 16 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e4b1c(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int *local_120;
  char local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_128 = &LAB_004e4d1c;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x22] == -0x80000000) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_138 = " Invalid position in list";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar2 = puStack_124;
  }
  puStack_124 = puVar2;
  FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_120);
  if (local_11c == '\x03') {
    cVar3 = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    if (cVar3 != '\0') {
      FUN_00403d94("Assertion failure");
    }
    FUN_004e251c((int *)local_8[0x20],local_8[0x22],&local_120);
    FUN_00403094(local_120);
    FUN_004e25e8((int *)local_8[0x20],local_8[0x22],0);
  }
  else {
    local_10 = FUN_004e25c4((int *)local_8[0x20],local_8[0x22]);
    local_c = FUN_004e257c((int *)local_8[0x20],local_8[0x22]);
    local_b = FUN_004e260c((int *)local_8[0x20],local_8[0x22]);
    FUN_004e2654((int *)local_8[0x21],&local_10);
  }
  FUN_0045d540((int *)local_8[0x20],local_8[0x22]);
  iVar4 = FUN_0045da14(local_8[0x20]);
  if (iVar4 == 0) {
    local_8[0x22] = -0x80000000;
  }
  else {
    iVar4 = FUN_0045da14(local_8[0x20]);
    if (iVar4 == local_8[0x22]) {
      piVar1 = local_8 + 0x22;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      if (SBORROW4(iVar4,1)) {
        thunk_FUN_00402874((uint)local_8);
      }
    }
  }
  piVar1 = local_8 + 0x32;
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar4,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_18,2);
  return;
}

