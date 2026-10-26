/*
 * FUN_0053786c at 0053786c
 * undefined __register FUN_0053786c(int * param_1, uint param_2)
 * Address ranges: 0053786c-005378ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053786c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  iVar3 = FUN_00537750(param_1);
  uVar4 = FUN_00520c98(iVar3);
  if ((char)uVar4 != '\0') {
    piVar5 = (int *)FUN_00537750(param_1);
    iVar3 = FUN_00538e94(piVar5);
    uVar1 = *(uint *)(iVar3 + 0x3c);
    piVar5 = (int *)(param_2 + 4);
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + uVar1;
    if (SCARRY4(iVar3,uVar1)) {
      thunk_FUN_00402874(uVar1);
    }
  }
  iVar2 = param_1[0x81];
  piVar5 = (int *)(param_2 + 0xc);
  iVar3 = *piVar5;
  *piVar5 = *piVar5 - iVar2;
  if (SBORROW4(iVar3,iVar2)) {
    thunk_FUN_00402874(param_2);
  }
  return;
}

