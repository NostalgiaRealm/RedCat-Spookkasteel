/*
 * FUN_004a07ec at 004a07ec
 * undefined __register FUN_004a07ec(int * param_1, short param_2, HGLOBAL param_3)
 * Address ranges: 004a07ec-004a08ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 22 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 22 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a07ec(int *param_1,short param_2,HGLOBAL param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  char *pcStack_13c;
  undefined *puStack_138;
  char *pcStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  HGLOBAL local_10;
  short local_a;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_128 = &LAB_004a08d0;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_a = param_2;
  local_8 = param_1;
  if (param_2 != 0x82) {
    iStack_130 = 0x4a082e;
    FUN_00402fe0(*param_1,local_11c);
    iStack_130 = 0x4a083c;
    FUN_00403fd4(&local_1c,local_11c);
    iStack_130 = local_1c;
    pcStack_134 = ".LoadFromClipboardFormat";
    puStack_138 = &DAT_004a090c;
    pcStack_13c = "Wrong clipboard data format.";
    puStack_140 = (undefined1 *)0x4a085b;
    FUN_004040f0(&local_18,4);
    puStack_140 = (undefined1 *)0x4a086d;
    FUN_00403d94(local_18);
    puVar1 = puStack_124;
  }
  puStack_124 = puVar1;
  puStack_140 = (undefined1 *)0x4a087c;
  local_14 = FUN_0049f874((int *)&PTR_FUN_0049f84c,'\x01',local_10);
  puStack_144 = &LAB_004a08ae;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_140 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x50))(local_8,local_14);
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_004a08b5;
  puStack_144 = (undefined1 *)0x4a08ad;
  FUN_00403094(local_14);
  return;
}

