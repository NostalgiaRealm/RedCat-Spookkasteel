/*
 * FUN_00557fc4 at 00557fc4
 * undefined __register FUN_00557fc4(int * param_1, undefined2 * param_2, undefined1 param_3)
 * Address ranges: 00557fc4-00557ff9;0055801a-005580e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00557fc4(int *param_1,undefined2 *param_2,undefined1 param_3)

{
  FUN_004a8fa0((int)param_1,param_2,param_3);
  switch(*param_2) {
  case 0x21:
    if (SBORROW4(param_1[0x60],param_1[0x5d])) {
      thunk_FUN_00402874((uint)param_1);
    }
    (**(code **)(*param_1 + 0xd0))();
    break;
  case 0x22:
    if (SCARRY4(param_1[0x60],param_1[0x5d])) {
      thunk_FUN_00402874((uint)param_1);
    }
    (**(code **)(*param_1 + 0xd0))();
    break;
  case 0x23:
    (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x5f]);
    break;
  case 0x24:
    (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x5e]);
    break;
  case 0x25:
  case 0x26:
    if (SBORROW4(param_1[0x60],param_1[0x5c])) {
      thunk_FUN_00402874((uint)param_1);
    }
    (**(code **)(*param_1 + 0xd0))();
    break;
  case 0x27:
  case 0x28:
    if (SCARRY4(param_1[0x60],param_1[0x5c])) {
      thunk_FUN_00402874((uint)param_1);
    }
    (**(code **)(*param_1 + 0xd0))();
  }
  return;
}

