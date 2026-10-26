/*
 * FUN_00491a3c at 00491a3c
 * undefined __register FUN_00491a3c(int * param_1, undefined4 * param_2)
 * Address ranges: 00491a3c-00491b12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot 1 for TAppObjDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e794 slot 1 for
   TAppObjDesc. Original bytes unchanged; names and types still inferred. */

void FUN_00491a3c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_00491b13;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  local_10 = FUN_0049278c(param_1);
  iVar1 = FUN_0048ec24(*(int *)(local_10 + 0x10));
  if (iVar1 < 1) {
    iVar1 = FUN_0048ec24(*(int *)(local_10 + 0x14));
    if (iVar1 < 1) {
      FUN_00402fe0(*local_8,local_118);
      FUN_00403fd4(&local_18,local_118);
      pcStack_130 = "A sortorder must define a field";
      FUN_004040f0(&local_14,3);
      FUN_00403d94(local_14);
    }
    else {
      FUN_0048f02c(*(int **)(local_10 + 0x14),0,local_c);
    }
  }
  else {
    FUN_0048f02c(*(int **)(local_10 + 0x10),0,local_c);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

