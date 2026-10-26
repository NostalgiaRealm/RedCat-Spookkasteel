/*
 * FUN_00467f10 at 00467f10
 * undefined __register FUN_00467f10(int * param_1)
 * Address ranges: 00467f10-00467f29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467f10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[7];
  iVar2 = piVar1[0xc];
  *(undefined1 *)(iVar2 + 0x35) = 0;
  FUN_00467688(param_1,*(undefined4 *)(*piVar1 + 0x154),iVar2,
               (undefined *)*(undefined4 *)(*piVar1 + 0x154),piVar1);
  return;
}

