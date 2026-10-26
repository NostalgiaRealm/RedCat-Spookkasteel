/*
 * FUN_00405e10 at 00405e10
 * undefined FUN_00405e10(void)
 * Address ranges: 00405e10-00405ef0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a6b0 slot 2 for .?AVCRcDropDeadState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a6b0 slot 2 for
   .?AVCRcDropDeadState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00405e10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00428b10();
  iVar2 = FUN_00425070();
  if (iVar2 != 0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0xb4))();
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
    piVar1 = *(int **)(param_1 + 0x28);
    uVar3 = __ftol();
    uVar4 = (**(code **)(*piVar1 + 0x9c))(uVar3);
    FUN_0046e9f0(uVar4,uVar3);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x9c))();
  *(undefined1 *)(iVar2 + 0x208) = 0;
  FUN_0049b8d0();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x9c))();
  *(undefined1 *)(iVar2 + 0x209) = 0;
  FUN_0049b8d0();
  (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(5,0);
  FUN_00505400(&DAT_006b9760);
  iVar2 = FUN_004298c0(&stack0xffffffe8,param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 4);
  return;
}

