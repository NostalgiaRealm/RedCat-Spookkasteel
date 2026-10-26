/*
 * FUN_0049dddc at 0049dddc
 * undefined __register FUN_0049dddc(int * param_1, uint param_2)
 * Address ranges: 0049dddc-0049deb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot 7 for TDaviDADLoader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49d2f4 slot 7 for
   TDaviDADLoader. Original bytes unchanged; names and types still inferred. */

void FUN_0049dddc(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  uVar2 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_0049deba;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(uint *)(param_1[2] + 4) <= param_2) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "DAD Frame index error";
    FUN_004040f0(&local_14,4);
    FUN_00403d94(local_14);
    uVar2 = extraout_ECX;
    param_2 = extraout_EDX;
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  FUN_0049aa40((int *)local_8[4],param_2,uVar2);
  local_10 = local_8[4];
  if (*(int *)(local_8[2] + 4) != 0) {
    if ((char)local_8[6] == '\0') {
      FUN_0049d72c((int)local_8,local_c);
    }
    else {
      FUN_0049d5e8((int)local_8,local_c);
    }
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

