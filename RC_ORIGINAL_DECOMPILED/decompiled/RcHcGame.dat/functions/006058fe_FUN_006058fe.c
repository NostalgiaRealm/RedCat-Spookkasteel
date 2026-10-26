/*
 * FUN_006058fe at 006058fe
 * undefined FUN_006058fe(void)
 * Address ranges: 006058fe-00605986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_006058fe(int param_1,uint param_2,char param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  if (0x7ffffffd < param_2) {
    FUN_005fe5fb();
  }
  puVar2 = *(undefined2 **)(param_1 + 4);
  if (((puVar2 == (undefined2 *)0x0) || (cVar1 = *(char *)((int)puVar2 + -1), cVar1 == '\0')) ||
     (cVar1 == -1)) {
    if (param_2 != 0) {
      if (param_3 == '\0') {
        if (param_2 <= *(uint *)(param_1 + 0xc)) {
          return 1;
        }
      }
      else {
        if ((*(uint *)(param_1 + 0xc) < 0x20) && (param_2 <= *(uint *)(param_1 + 0xc))) {
          return 1;
        }
        FUN_00605987(1);
      }
      goto LAB_00605978;
    }
    if (param_3 == '\0') {
      if (puVar2 == (undefined2 *)0x0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *puVar2 = 0;
      return 0;
    }
    uVar3 = 1;
  }
  else {
    if (param_2 != 0) {
LAB_00605978:
      FUN_00605b6f(param_2);
      return 1;
    }
    uVar3 = 0;
    *(char *)((int)puVar2 + -1) = cVar1 + -1;
  }
  FUN_00605987(uVar3);
  return 0;
}

