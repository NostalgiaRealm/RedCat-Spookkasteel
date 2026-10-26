/*
 * FUN_00537720 at 00537720
 * undefined4 __register FUN_00537720(int * param_1)
 * Address ranges: 00537720-0053774d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00537720(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00537750(param_1);
  piVar1 = (int *)FUN_00538e94(piVar1);
  uVar2 = FUN_005375c0(piVar1,param_1[0x80]);
  return uVar2;
}

