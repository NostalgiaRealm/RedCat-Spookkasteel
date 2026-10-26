/*
 * FUN_004bebb0 at 004bebb0
 * undefined __register FUN_004bebb0(int * param_1)
 * Address ranges: 004bebb0-004beca9;004becf5-004bed38;004bed7f-004beda9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 20 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 20 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bebb0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  char *pcStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c [2];
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c[0] = 0;
  local_11c[1] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_130 = &LAB_004bedaa;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    puStack_138 = (undefined1 *)0x4bebfe;
    FUN_00403d94("TAppDAOQuery.MoveNext: No recordset.");
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  puStack_138 = (undefined1 *)0x4bec06;
  cVar2 = (**(code **)(*local_8 + 0x3c))();
  if (cVar2 == '\0') {
    puStack_138 = (undefined1 *)0x4bec1a;
    FUN_00402fe0(*local_8,local_114);
    puStack_138 = (undefined1 *)0x4bec28;
    FUN_00403fd4(&local_14,local_114);
    puStack_138 = (undefined1 *)local_14;
    pcStack_13c = ".MoveNext: ";
    pcStack_140 = "Not at record";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  local_9 = 1;
  if ((char)local_8[6] == '\0') {
    pcStack_13c = &LAB_004bed39;
    pcStack_140 = (char *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pcStack_140;
    puStack_138 = &stack0xfffffffc;
    FUN_004ba66c(local_8[0xd]);
    sVar3 = FUN_004b9dc8(local_8[0xd]);
    if (sVar3 != 0) {
      FUN_004bacdc(local_8[0xd]);
      local_9 = 0;
    }
    *in_FS_OFFSET = pcStack_140;
  }
  else {
    pcStack_13c = &LAB_004becaa;
    pcStack_140 = (char *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pcStack_140;
    puStack_138 = &stack0xfffffffc;
    FUN_004ba720(local_8[0xd]);
    sVar3 = FUN_004b9af4(local_8[0xd]);
    if (sVar3 != 0) {
      FUN_004ba5b8(local_8[0xd]);
      local_9 = 0;
    }
    *in_FS_OFFSET = pcStack_140;
  }
  *in_FS_OFFSET = uStack_134;
  puStack_12c = &LAB_004bedb1;
  puStack_130 = (undefined1 *)0x4bed9c;
  FUN_00403dd4(local_11c,2);
  puStack_130 = (undefined1 *)0x4beda9;
  FUN_00403dd4(&local_14,2);
  return;
}

