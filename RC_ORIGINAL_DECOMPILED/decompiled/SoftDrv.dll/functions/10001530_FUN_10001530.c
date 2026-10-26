/*
 * FUN_10001530 at 10001530
 * undefined FUN_10001530(void)
 * Address ranges: 10001530-1000166c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001530(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puStack_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  puStack_84 = (undefined1 *)&local_7c;
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  local_7c = 0x7c;
  local_78 = 6;
  local_74 = 0;
  local_70 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(*(int **)(param_1 + 0xc));
  puStack_84 = (undefined1 *)0x7c;
  local_7c = 0;
  local_78 = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x58))(*(int **)(param_1 + 8),&puStack_84);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (((uVar1 & 2) == 0) || ((uVar1 & 0x10) == 0)) {
    if ((uVar1 & 0x40) == 0) {
      do {
        while( true ) {
          iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))
                            (*(int **)(param_1 + 8),0,*(undefined4 *)(param_1 + 0xc),0,0x1000000,0);
          if (iVar2 == 0) {
            return 1;
          }
          if (iVar2 != -0x7789fe3e) break;
          iVar2 = FUN_10001480(param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      } while (iVar2 == -0x7789fde4);
    }
    else {
      do {
        while( true ) {
          iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),8);
          if (iVar2 == 0) {
            return 1;
          }
          if (iVar2 != -0x7789fe3e) break;
          iVar2 = FUN_10001480(param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      } while (iVar2 == -0x7789fde4);
    }
  }
  else {
    do {
      while( true ) {
        iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                          (*(int **)(param_1 + 8),0,0,*(undefined4 *)(param_1 + 0xc),0,0);
        if (iVar2 == 0) {
          return 1;
        }
        if (iVar2 != -0x7789fe3e) break;
        iVar2 = FUN_10001480(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
    } while (iVar2 == -0x7789fde4);
  }
  return 0;
}

