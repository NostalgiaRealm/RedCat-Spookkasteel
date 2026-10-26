/*
 * FUN_004a28c4 at 004a28c4
 * undefined __register FUN_004a28c4(int * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004a28c4-004a2964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 47 for TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a27a4 slot 47 for
   TDaviGraphicHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004a28c4(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20 [4];
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar4 = local_20;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_c = param_3;
  local_8 = param_1;
  if (param_4 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_0040320c(param_4,(int)&PTR_FUN_004a1a64);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  local_10 = param_4;
  piVar2 = FUN_004a2298((int)param_4,6);
  local_8[0x80] = (int)piVar2;
  local_8[0x81] = local_10[0x14];
  FUN_00439f54(local_8,local_20,local_c);
  return;
}

