/*
 * FUN_10001380 at 10001380
 * undefined FUN_10001380(void)
 * Address ranges: 10001380-10001475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001380(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  undefined4 *puStack_94;
  undefined1 auStack_84 [8];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_60;
  
  if (param_1[4] == 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    puStack_94 = &local_7c;
    local_7c = 0x7c;
    local_78 = 6;
    local_74 = 0;
    local_70 = 0;
    (**(code **)(*(int *)param_1[3] + 0x58))((int *)param_1[3]);
    puStack_94 = (undefined4 *)0x0;
    do {
      while( true ) {
        iVar1 = (**(code **)(*(int *)param_1[3] + 100))
                          ((int *)param_1[3],&puStack_94,auStack_84,0,0);
        if (iVar1 == 0) {
          *unaff_retaddr = uStack_60;
          *param_1 = local_74;
          param_1[10] = 1;
          param_1[0xb] = *unaff_retaddr;
          param_1[0xc] = *param_1;
          return 1;
        }
        if (iVar1 != -0x7789fe3e) break;
        iVar1 = FUN_10001480(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    } while (iVar1 == -0x7789fde4);
  }
  return 0;
}

