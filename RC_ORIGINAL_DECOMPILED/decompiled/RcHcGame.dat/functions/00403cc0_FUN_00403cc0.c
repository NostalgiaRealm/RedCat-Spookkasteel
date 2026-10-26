/*
 * FUN_00403cc0 at 00403cc0
 * undefined FUN_00403cc0(void)
 * Address ranges: 00403cc0-00403d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00403cc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00425070();
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*(int *)param_1[9] + 0xb4))();
    switch(uVar3) {
    default:
      break;
    case 1:
    case 4:
    case 7:
    case 0xe:
      break;
    case 2:
    case 5:
    case 8:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x11:
      break;
    case 9:
    case 10:
    case 0xb:
    case 0x10:
    }
    piVar1 = (int *)param_1[9];
    uVar3 = __ftol();
    uVar4 = (**(code **)(*piVar1 + 0x9c))(uVar3);
    FUN_0046e9f0(uVar4,uVar3);
  }
  (**(code **)(*param_1 + 0xc))();
  FUN_00505400(&DAT_006b9760);
  (**(code **)(*(int *)param_1[9] + 0xb0))();
  return;
}

