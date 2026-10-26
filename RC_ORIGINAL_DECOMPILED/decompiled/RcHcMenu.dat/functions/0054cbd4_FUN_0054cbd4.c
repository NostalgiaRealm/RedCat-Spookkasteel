/*
 * FUN_0054cbd4 at 0054cbd4
 * undefined __register FUN_0054cbd4(int param_1)
 * Address ranges: 0054cbd4-0054cc84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054cbd4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 800) == 0) {
    piVar1 = FUN_0054b7ec();
    piVar1 = FUN_004c2274((int *)&PTR_FUN_004bcac4,'\x01',(int)piVar1);
    *(int **)(param_1 + 800) = piVar1;
    FUN_00403e04((int *)(param_1 + 0x32c),*(undefined4 **)(param_1 + 0x338));
    uVar2 = FUN_00409dd0(*(undefined **)(param_1 + 0x32c));
    if ((char)uVar2 == '\0') {
      FUN_00403d94("Agent database not found.");
    }
    FUN_00403e04((int *)(*(int *)(param_1 + 800) + 0x28),*(undefined4 **)(param_1 + 0x32c));
    uVar2 = FUN_004ced1c(*(int **)(param_1 + 800));
    *(undefined4 *)(param_1 + 0x324) = uVar2;
    FUN_004cfaf4(*(int **)(param_1 + 0x324));
  }
  return;
}

