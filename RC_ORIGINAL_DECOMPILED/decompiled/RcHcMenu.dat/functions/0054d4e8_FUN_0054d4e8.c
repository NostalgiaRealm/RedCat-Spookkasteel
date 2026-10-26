/*
 * FUN_0054d4e8 at 0054d4e8
 * int * __register FUN_0054d4e8(byte param_1, int * param_2)
 * Address ranges: 0054d4e8-0054d5cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0054d4e8(byte param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00403db0(param_2);
  if ((param_1 & 1) != 0) {
    iVar2 = FUN_00404030(*param_2);
    if (0 < iVar2) {
      FUN_00404038(param_2,(undefined4 *)&DAT_0054d5d8);
    }
    FUN_00404038(param_2,(undefined4 *)"fsBold");
    piVar1 = param_2;
  }
  if ((param_1 & 2) != 0) {
    iVar2 = FUN_00404030(*param_2);
    if (0 < iVar2) {
      FUN_00404038(param_2,(undefined4 *)&DAT_0054d5d8);
    }
    FUN_00404038(param_2,(undefined4 *)"fsItalic");
    piVar1 = param_2;
  }
  if ((param_1 & 4) != 0) {
    iVar2 = FUN_00404030(*param_2);
    if (0 < iVar2) {
      FUN_00404038(param_2,(undefined4 *)&DAT_0054d5d8);
    }
    FUN_00404038(param_2,(undefined4 *)"fsUnderline");
    piVar1 = param_2;
  }
  if ((param_1 & 8) != 0) {
    iVar2 = FUN_00404030(*param_2);
    if (0 < iVar2) {
      FUN_00404038(param_2,(undefined4 *)&DAT_0054d5d8);
    }
    FUN_00404038(param_2,(undefined4 *)"fsStrikeOut");
    piVar1 = param_2;
  }
  return piVar1;
}

