/*
 * FUN_00472d14 at 00472d14
 * undefined __register FUN_00472d14(int * param_1, int param_2)
 * Address ranges: 00472d14-00472d8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 97 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 97 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00472d14(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if ((param_2 == param_1[0x13]) && (param_1[0x1e] == 0)) {
    return;
  }
  iVar1 = param_1[0x1e];
  if ((iVar1 != 0) && (*(char *)(*(int *)(iVar1 + 0x28) + 0x8d) != '\x03')) {
    FUN_00473130(*(int **)(iVar1 + 0x28));
  }
  uVar2 = *(undefined4 *)(param_1[0x14] + param_2 * 4);
  cVar3 = (**(code **)(*param_1 + 0x1b4))(param_1,uVar2);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      (**(code **)(*param_1 + 0x1cc))();
      goto LAB_00472d85;
    }
    if (cVar3 == '\x02') {
      (**(code **)(*param_1 + 0x1e0))();
      goto LAB_00472d85;
    }
    if (cVar3 != '\x03') goto LAB_00472d85;
  }
  (**(code **)(*param_1 + 0x1ec))(param_1,uVar2);
LAB_00472d85:
  param_1[0x13] = param_2;
  return;
}

