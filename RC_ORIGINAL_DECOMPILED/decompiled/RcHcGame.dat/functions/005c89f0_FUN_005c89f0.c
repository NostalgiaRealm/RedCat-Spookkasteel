/*
 * FUN_005c89f0 at 005c89f0
 * undefined FUN_005c89f0(void)
 * Address ranges: 005c89f0-005c8aa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c89f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005c8ed0(param_1,param_2);
    FUN_005c89a0(puVar1);
    iVar2 = FUN_005c8ea0(puVar1);
    if (((iVar2 == 0) ||
        (iVar2 = FUN_005c8ab0(param_1,puVar1,&param_2), puVar1 = param_2, iVar2 != 0)) &&
       (iVar2 = FUN_005c8d80(puVar1,param_3), iVar2 != 0)) {
      (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,0);
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,0,0,param_2 != (undefined4 *)0x0)
      ;
      if (iVar2 == 0) {
        if (unaff_ESI != (undefined4 *)0x0) {
          *unaff_ESI = puVar1[1];
        }
        return 1;
      }
      FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x49d,&DAT_006b3f70
                   ,0);
    }
  }
  return 0;
}

