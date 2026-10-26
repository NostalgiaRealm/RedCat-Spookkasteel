/*
 * FUN_00436d00 at 00436d00
 * undefined FUN_00436d00(void)
 * Address ranges: 00436d00-00436d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00436d00(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00436db0(0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                       &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  FUN_0060a6f2(uVar2);
  switch(param_1) {
  case 0:
    uVar1 = FUN_0043af60(1);
    return uVar1;
  case 1:
    uVar1 = FUN_0043af60(2);
    return uVar1;
  case 2:
    uVar1 = FUN_0043af60(4);
    return uVar1;
  case 3:
    uVar1 = FUN_0043af60(8);
    return uVar1;
  case 4:
    uVar1 = FUN_0043af60(0x10);
    return uVar1;
  default:
    return 0;
  }
}

