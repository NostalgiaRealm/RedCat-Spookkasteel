/*
 * FUN_00418ce4 at 00418ce4
 * undefined __register FUN_00418ce4(undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 00418ce4-00418d28;00418d5a-00418d9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418ce4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if ((param_3[2] != 0) && (param_3[1] != 0)) {
    switch(**(undefined1 **)*param_3) {
    case 1:
    case 2:
    case 3:
    case 6:
      FUN_00418228();
      break;
    case 4:
      FUN_00418354();
      break;
    case 5:
    case 10:
    case 0xb:
      FUN_004184bc();
      break;
    case 7:
      FUN_00418674();
      break;
    case 8:
      FUN_00418920();
      break;
    case 0xc:
      FUN_00418a60();
      break;
    case 0x10:
      FUN_004183f0();
    }
  }
  return;
}

