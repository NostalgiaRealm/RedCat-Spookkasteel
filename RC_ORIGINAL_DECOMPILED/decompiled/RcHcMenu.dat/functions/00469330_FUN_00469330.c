/*
 * FUN_00469330 at 00469330
 * int __register FUN_00469330(int * param_1)
 * Address ranges: 00469330-0046938d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 29 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 29 for TField.
   Original bytes unchanged; names and types still inferred. */

int FUN_00469330(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[0x11];
  if (((param_1[0x23] != 0) && (cVar2 = (**(code **)(*param_1 + 0xc4))(), cVar2 == '\0')) &&
     (*(char *)((int)param_1 + 0x36) == '\0')) {
    if (param_1[0x10] < 1) {
      for (piVar1 = (int *)param_1[0x23]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
        if (0 < piVar1[0x10]) {
          iVar3 = (**(code **)(*piVar1 + 0x80))();
          return iVar4 + (iVar3 + 1) * piVar1[0x10];
        }
      }
    }
    else {
      iVar4 = iVar4 + param_1[0x10];
    }
  }
  return iVar4;
}

