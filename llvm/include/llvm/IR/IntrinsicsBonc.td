let IntrProperties = [IntrNoMem, IntrSpeculatable, IntrWillReturn] in {
  def int_bonc_loop_enter : DefaultAttrsIntrinsic<[], [llvm_label_ty]>;
  def int_bonc_loop_exit  : DefaultAttrsIntrinsic<[], [llvm_label_ty]>;
}