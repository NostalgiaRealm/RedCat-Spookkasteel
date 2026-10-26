/*
 * FUN_005bc850 at 005bc850
 * undefined FUN_005bc850(void)
 * Address ranges: 005bc850-005bc952
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc850(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 local_10 [16];
  
  *(undefined4 *)(param_1 + 0x390d0) = 1;
  if (*(int *)(param_1 + 0x33668) == 0) {
    FUN_005cf220(5,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x640,&DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005bc960(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x336b8));
  puVar2 = (undefined4 *)(param_1 + 0x33680);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)FUN_005bb560();
  *puVar2 = 0;
  FUN_005bb550();
  if (param_2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    FUN_005c9000();
    puVar3 = local_10;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x58))(puVar3);
  if (iVar1 == 0) {
    FUN_005cf220(7,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x662,&DAT_006b3f70,0);
    return 0;
  }
  return 1;
}

