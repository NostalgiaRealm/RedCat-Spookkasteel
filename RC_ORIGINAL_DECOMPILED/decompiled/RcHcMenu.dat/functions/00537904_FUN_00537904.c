/*
 * FUN_00537904 at 00537904
 * undefined __register FUN_00537904(int * param_1, uint param_2)
 * Address ranges: 00537904-0053796d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537904(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x80] != param_2) {
    piVar1 = (int *)FUN_00537750(param_1);
    FUN_0053a230(piVar1);
    piVar1 = (int *)FUN_00537750(param_1);
    piVar1 = (int *)FUN_00538e94(piVar1);
    iVar2 = FUN_005375c0(piVar1,param_2);
    piVar1 = (int *)FUN_00537750(param_1);
    iVar2 = FUN_00538980(piVar1,iVar2);
    uVar3 = FUN_0051c7f0(iVar2);
    param_1[0x80] = uVar3;
    piVar1 = (int *)FUN_00537750(param_1);
    FUN_00539d5c(piVar1);
  }
  return;
}

