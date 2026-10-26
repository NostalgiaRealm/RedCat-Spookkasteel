/*
 * FUN_00436ea0 at 00436ea0
 * undefined FUN_00436ea0(void)
 * Address ranges: 00436ea0-00436f2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00436ea0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00436db0(0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                       &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  FUN_0060a6f2(uVar1);
  switch(param_1) {
  case 0:
    FUN_00439ee0(1);
    return 1;
  case 1:
    FUN_00439ee0(2);
    return 1;
  case 2:
    FUN_00439ee0(4);
    return 1;
  case 3:
    FUN_00439ee0(8);
    return 1;
  case 4:
    FUN_00439ee0(0x10);
    return 1;
  default:
    return 0;
  }
}

