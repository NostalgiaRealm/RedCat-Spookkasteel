/*
 * FUN_00538300 at 00538300
 * undefined __register FUN_00538300(int * param_1)
 * Address ranges: 00538300-0053835c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00538300(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  piVar1 = (int *)FUN_005381e4(param_1);
  iVar2 = FUN_00538e94(piVar1);
  uVar3 = FUN_0051e5f0(iVar2);
  if ((int)uVar3 < 1) {
    local_10 = 0;
  }
  else {
    piVar1 = (int *)FUN_005381e4(param_1);
    piVar1 = (int *)FUN_00538e94(piVar1);
    local_10 = FUN_005375c0(piVar1,0);
  }
  param_1[0x85] = local_10;
  param_1[0x86] = -1;
  return;
}

