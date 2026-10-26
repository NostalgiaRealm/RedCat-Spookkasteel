/*
 * FUN_0044e028 at 0044e028
 * undefined __register FUN_0044e028(int * param_1)
 * Address ranges: 0044e028-0044e08e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 50 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 50 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044e028(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    (**(code **)(*param_1 + 0x70))();
    if (param_1[0x8c] != 0) {
      iVar1 = FUN_00442fec(*(int *)(param_1[0x8c] + 0x28));
      if (-1 < iVar1 + -1) {
        iVar3 = 0;
        do {
          piVar2 = (int *)FUN_00442ffc(*(int *)(param_1[0x8c] + 0x28),iVar3);
          if (*(char *)((int)piVar2 + 0x32) != '\0') {
            (**(code **)(*piVar2 + 0x3c))();
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_0044dfb8((int)param_1);
  }
  return;
}

